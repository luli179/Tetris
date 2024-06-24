#include "tetromino.h"
#include "color.h"
namespace gm{

    Tetromino I {{
        {{{'I', (int)Color::Cyan}, {-1, 0}, {1, 0}, {2, 0}}},
        {{{'I', (int)Color::Cyan}, {0, 1}, {0, -1}, {0, -2}}},
        {{{'I', (int)Color::Cyan}, {-2, 0}, {-1, 0}, {1, 0}}},
        {{{'I', (int)Color::Cyan}, {0, 2}, {0, 1}, {0, -1}}}

    }};

    Tetromino J {{
        {{{'J', (int)Color::Blue}, {-1, 1}, {-1, 0}, {1, 0}}},
        {{{'J', (int)Color::Blue}, {1, 1}, {0, 1}, {0, -1}}},
        {{{'J', (int)Color::Blue}, {-1, 0}, {1, 0}, {1, -1}}},
        {{{'J', (int)Color::Blue}, {0, 1}, {-1, -1}, {0, -1}}}

    }};


    Tetromino L {{
        {{{'L', (int)Color::Orange}, {-1, 0}, {1, 0}, {1, 1}}},
        {{{'L', (int)Color::Orange}, {0, 1}, {0, -1}, {1, -1}}},
        {{{'L', (int)Color::Orange}, {-1, -1}, {-1, 0}, {1, 0}}},
        {{{'L', (int)Color::Orange}, {-1, 1}, {0, 1}, {0, -1}}}

    }};
//======================================================================
//unimplment below
    Tetromino O {{
        {{{'O', (int)Color::Yellow}, {-1, 0}, {1, 0}, {2, 0}}},
        {{{'O', (int)Color::Yellow}, {0, 1}, {0, -1}, {0, -2}}},
        {{{'O', (int)Color::Yellow}, {-2, 0}, {-1, 0}, {1, 0}}},
        {{{'O', (int)Color::Yellow}, {0, 2}, {0, 1}, {0, -1}}}

    }};

    Tetromino S {{
        {{{'I', (int)Color::Cyan}, {-1, 0}, {1, 0}, {2, 0}}},
        {{{'I', (int)Color::Cyan}, {0, 1}, {0, -1}, {0, -2}}},
        {{{'I', (int)Color::Cyan}, {-2, 0}, {-1, 0}, {1, 0}}},
        {{{'I', (int)Color::Cyan}, {0, 2}, {0, 1}, {0, -1}}}

    }};

    Tetromino T {{
        {{{'I', (int)Color::Cyan}, {-1, 0}, {1, 0}, {2, 0}}},
        {{{'I', (int)Color::Cyan}, {0, 1}, {0, -1}, {0, -2}}},
        {{{'I', (int)Color::Cyan}, {-2, 0}, {-1, 0}, {1, 0}}},
        {{{'I', (int)Color::Cyan}, {0, 2}, {0, 1}, {0, -1}}}

    }};

    Tetromino Z {{
        {{{'I', (int)Color::Cyan}, {-1, 0}, {1, 0}, {2, 0}}},
        {{{'I', (int)Color::Cyan}, {0, 1}, {0, -1}, {0, -2}}},
        {{{'I', (int)Color::Cyan}, {-2, 0}, {-1, 0}, {1, 0}}},
        {{{'I', (int)Color::Cyan}, {0, 2}, {0, 1}, {0, -1}}}

    }};


}