#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkResidentActor.generated.h"

class USkeletalMesh;
class UStaticMesh;

UCLASS(Blueprintable)
class AHbkResidentActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> SkeletalMeshArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> StaticMeshArray;
    
    AHbkResidentActor(const FObjectInitializer& ObjectInitializer);

};

