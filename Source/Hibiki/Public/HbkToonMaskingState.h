#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkToonMaskingParamData.h"
#include "HbkToonMaskingState.generated.h"

class UMaterialInstance;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class UHbkToonMaskingState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstance* VFXMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* VFXMaterialMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkToonMaskingParamData ParamData;
    
public:
    UHbkToonMaskingState();

};

