#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "HbkAnimNotify_KorsicaCircleMoveSetting.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkAnimNotify_KorsicaCircleMoveSetting : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCircleMoveEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PlayerAction;
    
    UHbkAnimNotify_KorsicaCircleMoveSetting();

};

