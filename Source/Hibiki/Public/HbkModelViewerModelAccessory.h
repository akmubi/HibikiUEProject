#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkModelViewerModelActorChangeMaterial.h"
#include "HbkModelViewerModelAccessory.generated.h"

UCLASS(Blueprintable)
class AHbkModelViewerModelAccessory : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkModelViewerModelActorChangeMaterial> ChangeMaterialList;
    
public:
    AHbkModelViewerModelAccessory(const FObjectInitializer& ObjectInitializer);

};

