#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "Templates/SubclassOf.h"
#include "HbkAnimNotifyState_em0730_Spotlight.generated.h"

class AHbkEm0730_Spotlight;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HIBIKI_API UHbkAnimNotifyState_em0730_Spotlight : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEm0730_Spotlight> SpotlightActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyDelayTime;
    
public:
    UHbkAnimNotifyState_em0730_Spotlight();

};

