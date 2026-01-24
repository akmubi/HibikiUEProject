#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkBeforeStartBattleParam.generated.h"

class UHbkPreBattleWidget;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FHbkBeforeStartBattleParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* NoticeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkPreBattleWidget> PreBattleWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraAddArmLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraAddArmLengthZoomInInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraAddArmLengthZoomOutInterpSpeed;
    
    HIBIKI_API FHbkBeforeStartBattleParam();
};

