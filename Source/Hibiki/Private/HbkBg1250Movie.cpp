#include "HbkBg1250Movie.h"

FHbkBg1250Movie::FHbkBg1250Movie() {
    this->bPreOpenMovie = false;
    this->bEnablePlayMovie = false;
    this->bLoopMovie = false;
    this->BinkMediaPlayer = NULL;
    this->BinkMediaTexture = NULL;
    this->CineBinkMoviePlayer = NULL;
}

