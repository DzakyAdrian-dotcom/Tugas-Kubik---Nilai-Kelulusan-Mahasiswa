#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int score, total = 0;
    int passed = 0;
    int highest = 0;
    vector<int> scores;

    // Input untuk jumlah mahasiswa (n)
    cout << "Jumlah Mahasiswa : ";
    cin >> n;

    // Input untuk macam-macam nilai mahasiswa
    cout << "Variasi nilai Mahasiswa : ";

    // Loop sebanyak n nilai
    for (int i = 0; i < n; i++) {
        cin >> score;
        scores.push_back(score);
        total += score;

        if (score >= 60) {
            passed++;
        }

        // Set nilai tertinggi
        if (i == 0 || score > highest) {
            highest = score;
        }
    }

    // Hitung rata-rata dan tampilkan hasil
    double average = (double) total / scores.size();

    // Ringkasan Hasil Analisis
    cout << "\n=== HASIL ANALISIS ===" << endl;
    cout << "Total : " << total << endl;
    cout << "Rata-rata : " << average << endl;
    cout << "Tertinggi : " << highest << endl;
    cout << "Lulus : " << passed << endl;

    return 0;
}