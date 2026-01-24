#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EEm7500RemoteState.h"
#include "HbkAnimNotify_Em7500SetRemoteState.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_Em7500SetRemoteState : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEm7500RemoteState ChangeState;
    
public:
    UHbkAnimNotify_Em7500SetRemoteState();

};

