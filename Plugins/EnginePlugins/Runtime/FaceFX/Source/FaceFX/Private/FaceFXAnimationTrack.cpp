#include "FaceFXAnimationTrack.h"

UFaceFXAnimationTrack::UFaceFXAnimationTrack() {
}

FMovieSceneEvalTemplatePtr UFaceFXAnimationTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const {
	return FMovieSceneEvalTemplatePtr();
}