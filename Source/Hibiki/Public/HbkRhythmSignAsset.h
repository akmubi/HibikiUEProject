#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkRhythmSignAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkRhythmSignAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RhythmSignParticleTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CommunicationEffectRowName;
    
    UHbkRhythmSignAsset();

};

