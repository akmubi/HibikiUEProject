#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkPhotoModePostProcess.generated.h"

class UHbkPhotoModePostProcessDataManager;

UCLASS(Blueprintable)
class UHbkPhotoModePostProcess : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPhotoModePostProcessDataManager* DataManager;
    
public:
    UHbkPhotoModePostProcess();

};

