#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomMeshComponent.h"
#include "EHbkBoxMeshPivotType.h"
#include "HbkBoxMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkBoxMeshComponent : public UCustomMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkBoxMeshPivotType PivotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CustomPivotOffset;
    
public:
    UHbkBoxMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePrimitive(float DeltaTime);
    
};

