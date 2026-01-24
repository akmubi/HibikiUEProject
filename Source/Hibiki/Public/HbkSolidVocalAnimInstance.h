#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkCharacterAnimInstance.h"
#include "HbkSolidVocalAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API UHbkSolidVocalAnimInstance : public UHbkCharacterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAdjustNextNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdjustNextNoteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeginPlayRate;
    
public:
    UHbkSolidVocalAnimInstance();

protected:
    UFUNCTION(BlueprintCallable)
    void SetAdjustBeat(EHbkNote NoteType, float MinTimeRate);
    
    UFUNCTION(BlueprintCallable)
    void ResetAdjustBeat();
    
};

