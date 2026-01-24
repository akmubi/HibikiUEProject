#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmick_AirShooterLuggageInstance.generated.h"

class UHbkStaticMeshComponent;

USTRUCT(BlueprintType)
struct FHbkGimmick_AirShooterLuggageInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStaticMeshComponent* StaticMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LuggageMeshIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SrcMovementLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DstMovementLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    HIBIKI_API FHbkGimmick_AirShooterLuggageInstance();
};

