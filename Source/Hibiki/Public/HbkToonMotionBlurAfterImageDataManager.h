#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkToonMotionBlurAfterImageDataManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UHbkToonMotionBlurAfterImageDataManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
public:
    UHbkToonMotionBlurAfterImageDataManager();

};

