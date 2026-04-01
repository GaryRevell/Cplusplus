#include <array>
#include <string>
#include <vector>
#include <algorithm>

// Round down all provided student scores.
std::vector<int> round_down_scores(const std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> result {};
    for (const auto student : student_scores)
        result.push_back(static_cast<int>(student));
    return result;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    const int count = std::count_if(student_scores.begin(), student_scores.end(),
                                         [](const int x) { return x < 41 ;});
    return count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<int, 4> results {};
    const int steps = ( highest_score - 40 )/results.size();
    for ( int i = 0; i < results.size(); ++i )
        results[i] = 41 + i * steps;
    return results;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    int rank {1};
    std::vector<std::string> results {};
    for ( const auto& student : student_names) {
        results.push_back(std::to_string(rank)+". "+student+": "+std::to_string(student_scores[rank-1]));
        rank++;
    }
    return results;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for ( int i = 0; i < student_scores.size(); ++i ) 
        if ( student_scores[i] == 100 ) 
            return student_names[i];
    
    return "";
}
