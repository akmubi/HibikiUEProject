#pragma once
#include "CoreMinimal.h"
#include "HbkCostumeComponent.h"
#include "HbkPlayerCostumeComponent.generated.h"

class UHbkPlayerCostumeMeshComponent;
class UMaterialInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPlayerCostumeComponent : public UHbkCostumeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CharredMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CharredIgnoreMaterialSlotNames;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UHbkPlayerCostumeMeshComponent>> CostumeMeshList;
    
public:
    UHbkPlayerCostumeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RevertCharredMaterial();
    
    UFUNCTION(BlueprintCallable)
    bool ReplaceCharredMaterial();
    
    UFUNCTION(BlueprintCallable)
    void OnPostInitializedCostumeComponent();
    
};

