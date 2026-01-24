#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HbkPhotoAnimInstance.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API UHbkPhotoAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PoseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* EmoteAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmoteBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComp;
    
public:
    UHbkPhotoAnimInstance();

    UFUNCTION(BlueprintCallable)
    void SetSourceMeshComp(USkeletalMeshComponent* MeshComp);
    
};

