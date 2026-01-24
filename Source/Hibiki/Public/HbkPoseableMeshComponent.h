#pragma once
#include "CoreMinimal.h"
#include "Components/PoseableMeshComponent.h"
#include "EHbkCharacterShadowType2.h"
#include "EHbkDynamicShadowMapType.h"
#include "EHbkForwardLightType.h"
#include "EHbkHologramPostActivateGroup.h"
#include "HbkPrimitiveComponentInterface.h"
#include "HbkPoseableMeshComponent.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPoseableMeshComponent : public UPoseableMeshComponent, public IHbkPrimitiveComponentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkCharacterShadowType2 HbkCharacterShadowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkDynamicShadowMapType HbkDynamicShadowMapType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bForceDisableReceiveShadow2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bForceDisableReceiveShadow3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipCameraMotionBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkForwardLightType ForwardLightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipKeyLight2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bForceDisableReceiveShadowMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkHologramPostActivateGroup HologramPostActivateGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> DitherAlphaMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> DefaultMaterials;
    
public:
    UHbkPoseableMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSkipCameraMotionBlur(const bool bInSkipCameraMotionBlur);
    
    UFUNCTION(BlueprintCallable)
    void SetHologramPostActivateGroup(EHbkHologramPostActivateGroup InHologramPostActivateGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetHbkDynamicShadowMapType(EHbkDynamicShadowMapType InHbkDynamicShadowMapType);
    
    UFUNCTION(BlueprintCallable)
    void SetHbkCharacterShadowType2(EHbkCharacterShadowType2 InHbkCharacterShadowType2);
    
    UFUNCTION(BlueprintCallable)
    void SetForceDisableReceiveShadowMain(const bool bInForceDisableReceiveShadowMain);
    
    UFUNCTION(BlueprintCallable)
    void SetForceDisableReceiveShadow3(const bool bInForceDisableReceiveShadow3);
    
    UFUNCTION(BlueprintCallable)
    void SetForceDisableReceiveShadow2(const bool bInForceDisableReceiveShadow2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSkipCameraMotionBlur() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkHologramPostActivateGroup GetHologramPostActivateGroup() const;
    

    // Fix for true pure virtual functions not being implemented
};

