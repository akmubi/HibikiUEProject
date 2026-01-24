#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "FaceFXAnimId.h"
#include "FaceFXSkelMeshComponentId.h"
#include "FaceFXAnimationSection.generated.h"

class UFaceFXAnim;

UCLASS(Blueprintable, MinimalAPI)
class UFaceFXAnimationSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaceFXSkelMeshComponentId SkelMeshComponentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFaceFXAnimId AnimationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFaceFXAnim> Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsAnimationDurationLoaded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AnimationDuration;
    
public:
    UFaceFXAnimationSection();

};

