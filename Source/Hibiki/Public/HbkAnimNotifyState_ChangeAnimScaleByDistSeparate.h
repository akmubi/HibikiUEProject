#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "HbkEmAnimScaleOffsetChangeData.h"
#include "HbkAnimNotifyState_ChangeAnimScaleByDistSeparate.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class HIBIKI_API UHbkAnimNotifyState_ChangeAnimScaleByDistSeparate : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEmAnimScaleOffsetChangeData Data_X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEmAnimScaleOffsetChangeData Data_Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEmAnimScaleOffsetChangeData Data_Z;
    
public:
    UHbkAnimNotifyState_ChangeAnimScaleByDistSeparate();

};

