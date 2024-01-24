#include "node.hpp"

int main(int argc, char const *argv[])
{
    node *tr = nullptr;
    insert(&tr, 4);
    insert(&tr, 2);
    insert(&tr, 1);
    insert(&tr, 5);
    insert(&tr, 3);

    del(&tr, 4);
    return 0;
}
