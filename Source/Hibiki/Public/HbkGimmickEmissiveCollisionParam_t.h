#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickEmissiveParam_t.h"
#include "HbkGimmickEmissiveCollisionParam_t.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FHbkGimmickEmissiveCollisionParam_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HitEndReturnColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* pPrimitiveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmickEmissiveParam_t> ParamArray;
    
    HIBIKI_API FHbkGimmickEmissiveCollisionParam_t();
};

