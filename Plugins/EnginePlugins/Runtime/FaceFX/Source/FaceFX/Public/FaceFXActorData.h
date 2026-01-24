#pragma once
#include "CoreMinimal.h"
#include "FaceFXIdData.h"
#include "FaceFXActorData.generated.h"

USTRUCT(BlueprintType)
struct FFaceFXActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ActorRawData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> BonesRawData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFaceFXIdData> Ids;
    
    FACEFX_API FFaceFXActorData();
};

