#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkBeginRhythmGameParam.h"
#include "HbkBeginRhythmGameAsset.generated.h"

UCLASS(Blueprintable)
class UHbkBeginRhythmGameAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBeginRhythmGameParam BeginRhythmGameParam;
    
public:
    UHbkBeginRhythmGameAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkBeginRhythmGameParam GetBeginRhythmGameParam() const;
    
};

