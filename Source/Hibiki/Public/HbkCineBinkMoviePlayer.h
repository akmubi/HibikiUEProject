#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkCineBinkMoviePlayer.generated.h"

class UBinkMediaPlayer;
class UBinkMediaTexture;

UCLASS(Blueprintable)
class UHbkCineBinkMoviePlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBinkMediaTexture* MediaTexture;
    
    UHbkCineBinkMoviePlayer();

};

