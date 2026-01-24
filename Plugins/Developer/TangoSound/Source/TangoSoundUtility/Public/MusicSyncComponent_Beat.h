#pragma once
#include "CoreMinimal.h"
#include "MusicSyncComponent_Beat.generated.h"

USTRUCT(BlueprintType)
struct FMusicSyncComponent_Beat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Beat1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Beat2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Beat3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Beat4;
    
    TANGOSOUNDUTILITY_API FMusicSyncComponent_Beat();
};

