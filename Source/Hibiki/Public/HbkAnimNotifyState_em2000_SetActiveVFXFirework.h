#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "HbkAnimNotifyState_em2000_SetActiveVFXFirework.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HIBIKI_API UHbkAnimNotifyState_em2000_SetActiveVFXFirework : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRestore;
    
public:
    UHbkAnimNotifyState_em2000_SetActiveVFXFirework();

};

