#include <iostream>
using namespace std;

class Notification {
public:
    virtual void showMessage() {
        cout << "Notification: " << endl;
    }
};

class LikeNotification : public Notification {
public:
    void showMessage() {
        cout << "Someone liked your post " << endl;
    }
};

class CommentNotification : public Notification {
public:
    void showMessage() {
        cout << "Someone commented on your post " << endl;
    }
};

class FollowNotification : public Notification {
public:
    void showMessage() {
        cout << "You have a new follower " << endl;
    }
};

int main() {
    Notification n1;
    n1.showMessage();
    Notification* n[3];
    LikeNotification L;
    CommentNotification C;
    FollowNotification F;
    n[0] = &L;
    n[1] = &C;
    n[2] = &F;

    for (int i = 0; i < 3; i++) {
        n[i]->showMessage();
    }

    return 0;
}
