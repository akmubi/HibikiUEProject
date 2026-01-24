#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkGimmickBase.h"
#include "HbkGimmick_RotateObj.generated.h"

class UMeshComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_RotateObj : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator deltaRot;
    
public:
    AHbkGimmick_RotateObj(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void AddRotateMesh(TArray<UMeshComponent*> MeshArray);
    
};

