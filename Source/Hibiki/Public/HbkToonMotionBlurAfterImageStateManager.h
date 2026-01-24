#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkToonMotionBlurAfterImageStateManager.generated.h"

class AHbkCharacter;
class UHbkToonMotionBlurAfterImageDataManager;
class UHbkToonMotionBlurAfterImageState;

UCLASS(Blueprintable, Transient)
class UHbkToonMotionBlurAfterImageStateManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AHbkCharacter*, UHbkToonMotionBlurAfterImageState*> StatesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkToonMotionBlurAfterImageDataManager* DataManager;
    
public:
    UHbkToonMotionBlurAfterImageStateManager();

};

