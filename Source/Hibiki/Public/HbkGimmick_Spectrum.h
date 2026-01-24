#pragma once
#include "CoreMinimal.h"
#include "HbkGimmickBase.h"
#include "HbkSpectrumMeshInfo.h"
#include "HbkGimmick_Spectrum.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_Spectrum : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName materialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NumRepeatU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkSpectrumMeshInfo> SpectrumMeshInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDefaultActorHiddenInGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ActivateFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DeactivateFlag;
    
public:
    AHbkGimmick_Spectrum(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetMeshCompToSpectrumMeshInfo(int32 Index, UStaticMeshComponent* MeshComp);
    
};

