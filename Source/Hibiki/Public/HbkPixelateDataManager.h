#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkPixelateDataManager.generated.h"

class UDataTable;
class UHbkPixelateStateManager;

UCLASS(Blueprintable)
class UHbkPixelateDataManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* OverrideDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* SoundDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPixelateStateManager* PixelateStateManager;
    
public:
    UHbkPixelateDataManager();

};

