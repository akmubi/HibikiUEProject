#include "HbkMovieSceneActorActivateTrack.h"

UHbkMovieSceneActorActivateTrack::UHbkMovieSceneActorActivateTrack() : UMovieSceneTrack(FObjectInitializer::Get()) {
}

FMovieSceneEvalTemplatePtr UHbkMovieSceneActorActivateTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const {
	return FMovieSceneEvalTemplatePtr();
}
