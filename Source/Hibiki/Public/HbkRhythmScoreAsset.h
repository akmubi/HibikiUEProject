#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkRhythmNoteParam.h"
#include "HbkRhythmScoreAsset.generated.h"

UCLASS(Blueprintable)
class UHbkRhythmScoreAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkRhythmNoteParam> RhythmScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarTime;
    
public:
    UHbkRhythmScoreAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHbkRhythmNoteParam> GetRhythmScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOffsetTime() const;
    
};

