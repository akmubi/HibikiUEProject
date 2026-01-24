#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkMaterialFlip.h"
#include "HbkMaterialFlipComponent.generated.h"

class UMaterialInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkMaterialFlipComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkMaterialFlip> MaterialFlipList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMaterialInstance*> MaterialPool;
    
public:
    UHbkMaterialFlipComponent(const FObjectInitializer& ObjectInitializer);

};

