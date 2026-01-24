#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HbkBg1250Movie.generated.h"

class UBinkMediaPlayer;
class UBinkMediaTexture;
class UHbkCineBinkMoviePlayer;

USTRUCT(BlueprintType)
struct FHbkBg1250Movie {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bPreOpenMovie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEnablePlayMovie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bLoopMovie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* BinkMediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    UBinkMediaTexture* BinkMediaTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle MovieDataRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkCineBinkMoviePlayer* CineBinkMoviePlayer;
    
    HIBIKI_API FHbkBg1250Movie();
};

