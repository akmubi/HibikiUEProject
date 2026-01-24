#pragma once
#include "CoreMinimal.h"
#include "HbkFlashLightAtkTagMaterialParamInfo_t.h"
#include "HbkFlashLightAtkTagMaterialInfo_t.generated.h"

class UMaterialInstance;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FHbkFlashLightAtkTagMaterialInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName materialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> OverrideMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstance* pOverrideMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkFlashLightAtkTagMaterialParamInfo_t> ParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMaterialInterface> pDefaultMat;
    
    HIBIKI_API FHbkFlashLightAtkTagMaterialInfo_t();
};

