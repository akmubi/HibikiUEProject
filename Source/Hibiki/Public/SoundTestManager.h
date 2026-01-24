#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SoundTestManager.generated.h"

class UAkComponent;

UCLASS(Blueprintable)
class HIBIKI_API ASoundTestManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent1;
    
    ASoundTestManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopAkComponent1();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopAkComponent0();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 PostAkComponent1();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    int32 PostAkComponent0();
    
};

