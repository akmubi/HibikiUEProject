#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkCineToonMaskingActor.generated.h"

class AHbkCineSkeletalActor;
class UHbkToonMaskingState;

UCLASS(Blueprintable)
class AHbkCineToonMaskingActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bEnableToonMasking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString ToonMaskingRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay8;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay9;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay11;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay12;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay13;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay14;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay15;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay16;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay17;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay18;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay19;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay20;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay21;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay22;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay23;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay24;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay25;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay26;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay27;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay28;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay29;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay30;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay31;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AHbkCineSkeletalActor* CineSkeletalActorToDisplay32;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkToonMaskingState* State;
    
    AHbkCineToonMaskingActor(const FObjectInitializer& ObjectInitializer);

};

