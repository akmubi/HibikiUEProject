#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EHbkNote.h"
#include "HbkAnimNotifyState_EnemyAnimImpact.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HIBIKI_API UHbkAnimNotifyState_EnemyAnimImpact : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote SyncNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimImpactDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimImpactTimer;
    
public:
    UHbkAnimNotifyState_EnemyAnimImpact();

    UFUNCTION(BlueprintCallable)
    void OnEventEx(int32 NoteCount, bool bOnBeat) const;
    
    UFUNCTION(BlueprintCallable)
    void OnEvent(int32 NoteCount) const;
    
};

