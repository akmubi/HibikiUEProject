#pragma once
#include "CoreMinimal.h"
#include "HbkMaterialOverrideMovieInfo_t.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FHbkMaterialOverrideMovieInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName materialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> MovieMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* pMovieMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* pMatDynamic;
    
    HIBIKI_API FHbkMaterialOverrideMovieInfo_t();
};

