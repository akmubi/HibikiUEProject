#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkPlacementStaticMesh.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPlacementStaticMesh : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    AHbkPlacementStaticMesh(const FObjectInitializer& ObjectInitializer);

};

