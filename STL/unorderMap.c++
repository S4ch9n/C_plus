// In C++, an unordered_map is a container that stores key-value pairs and allows fast access to individual elements based on their keys. Unlike std::map, which keeps elements sorted by their keys, std::unordered_map uses a hash table internally, which provides constant-time average complexity (O(1)) for insertions, deletions, and lookups.

// Key Points about std::unordered_map:
// Hash Table: It uses a hash table internally, so elements are not stored in any particular order.
// Unique Keys: Each key in the unordered_map must be unique. If you try to insert an element with a key that already exists, the new element will not replace the old one.
// Efficiency: Average time complexity for insertion, lookup, and deletion is O(1). However, in rare cases (e.g., when hash collisions occur), the time complexity can degrade to O(n).
// Ordering: The order of elements is not guaranteed. If you want elements to be ordered by their keys, you should use std::map instead.

#include <iostream>
#include <unordered_map>

int main() {
    // Create an unordered_map where keys are integers and values are strings
    std::unordered_map<int, std::string> umap;

    // Insert elements into the unordered_map
    umap[1] = "Apple";
    umap[2] = "Banana";
    umap[3] = "Cherry";

    // Access elements
    std::cout << "Key 1: " << umap[1] << std::endl;

    // Iterate through the unordered_map
    for (const auto& pair : umap) {
        std::cout << pair.first << " -> " << pair.second << std::endl;
    }

    // Check if a key exists
    if (umap.find(2) != umap.end()) {
        std::cout << "Key 2 exists with value: " << umap[2] << std::endl;
    }

    // Remove an element by key
    umap.erase(1);

    // Print the unordered_map after removal
    std::cout << "After removing key 1:" << std::endl;
    for (const auto& pair : umap) {
        std::cout << pair.first << " -> " << pair.second << std::endl;
    }

    return 0;
}
