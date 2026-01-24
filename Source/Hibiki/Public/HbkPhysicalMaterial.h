#pragma once
#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "HbkPhysicalMaterialInfo.h"
#include "HbkPhysicalMaterial.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class HIBIKI_API UHbkPhysicalMaterial : public UPhysicalMaterial {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkPhysicalMaterialInfo> InfoMap;
    
public:
    UHbkPhysicalMaterial();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkPhysicalMaterialInfo GetInfoByName(FName InfoName) const;
    
};

