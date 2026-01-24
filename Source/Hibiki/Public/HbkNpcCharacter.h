#pragma once
#include "CoreMinimal.h"
#include "HbkCharacter.h"
#include "HbkNpcCharacter_SignificanceStateChangedDelegate.h"
#include "HbkNpcCharacter.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkNpcCharacter : public AHbkCharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool significanceDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float significanceDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float noRenderMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float minTickInterval;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkNpcCharacter_SignificanceStateChanged OnSignificanceStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSignificanceStateActive;
    
public:
    AHbkNpcCharacter(const FObjectInitializer& ObjectInitializer);

};

