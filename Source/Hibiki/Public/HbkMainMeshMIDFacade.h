#pragma once
#include "CoreMinimal.h"
#include "HbkMainMeshMIDFacade.generated.h"

class UMaterialInstanceDynamic;
class UMeshComponent;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FHbkMainMeshMIDFacade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMeshComponent* MainMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> MIDs;
    
    HIBIKI_API FHbkMainMeshMIDFacade();
};

