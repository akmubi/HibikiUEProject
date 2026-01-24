#pragma once
#include "CoreMinimal.h"
#include "Components/SplineMeshComponent.h"
#include "EHbkDynamicShadowMapType.h"
#include "EHbkEnvShadowType.h"
#include "EHbkForwardLightType.h"
#include "EHbkHologramPostActivateGroup.h"
#include "HbkPrimitiveComponentInterface.h"
#include "HbkSplineMeshComponent.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkSplineMeshComponent : public USplineMeshComponent, public IHbkPrimitiveComponentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipCameraMotionBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EHbkEnvShadowType HbkShadowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EHbkDynamicShadowMapType HbkDynamicShadowMapType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkForwardLightType ForwardLightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipKeyLight2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkHologramPostActivateGroup HologramPostActivateGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> DitherAlphaMaterials;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> DefaultMaterials;
    
public:
    UHbkSplineMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSkipCameraMotionBlur(const bool bInSkipCameraMotionBlur);
    
    UFUNCTION(BlueprintCallable)
    void SetHologramPostActivateGroup(EHbkHologramPostActivateGroup InHologramPostActivateGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetHbkShadowType(EHbkEnvShadowType InHbkShadowType);
    
    UFUNCTION(BlueprintCallable)
    void SetHbkDynamicShadowMapType(EHbkDynamicShadowMapType InHbkDynamicShadowMapType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSkipCameraMotionBlur() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkHologramPostActivateGroup GetHologramPostActivateGroup() const;
    

    // Fix for true pure virtual functions not being implemented
};

