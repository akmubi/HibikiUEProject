#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "HbkArmControlPointInfo.h"
#include "HbkCharacterAnimInstance.h"
#include "HbkEm7500_ArmBaseAnim.generated.h"

class AHbkEm7500_ArmBase;

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API UHbkEm7500_ArmBaseAnim : public UHbkCharacterAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> CPTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Const_CPOffsetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HeadLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator HeadRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadBoneTransformWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBreakArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkArmControlPointInfo> CPInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadCPBoneName;
    
    UHbkEm7500_ArmBaseAnim();

    UFUNCTION(BlueprintCallable)
    void SetEnableHeadBoneTransform(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEm7500_ArmBase* GetOwnerArm() const;
    
};

