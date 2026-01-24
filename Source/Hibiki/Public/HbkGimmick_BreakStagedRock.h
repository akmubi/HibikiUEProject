#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BreakObject.h"
#include "HbkGimmick_BreakStagedRock.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AHbkGimmick_BreakStagedRock : public AHbkGimmick_BreakObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ImpulseBaseCompName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ImpulseBaseComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlapImpulseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivateImpulseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BreakNoteCount;
    
public:
    AHbkGimmick_BreakStagedRock(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnNoteQuarter(int32 NoteCount, bool bDownBeat);
    
};

