import pygame
import random

pygame.init()

speed_list = [-0.3, 0.3]

display = pygame.display.set_mode((800, 600))
ball = pygame.image.load("ball.png")

TIMER_EVENT = pygame.USEREVENT + 1
pygame.time.set_timer(TIMER_EVENT, 100)

ballX = []
ballY = []
ballDx = []
ballDy = []

running = True

while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        elif event.type == TIMER_EVENT:
            Dx = random.choice(speed_list)
            Dy = random.choice(speed_list)
            ballDx.append(Dx)
            ballDy.append(Dy)

        elif event.type == pygame.MOUSEBUTTONDOWN:
            x, y = pygame.mouse.get_pos()
            ballX.append(x)
            ballY.append(y)
            ballDx.append(random.choice(speed_list))
            ballDy.append(random.choice(speed_list))

    for i in range(len(ballX)):
        ballX[i] += ballDx[i]
        ballY[i] += ballDy[i]
        if ballX[i] < 0 or ballX[i] > 800:
            ballDx[i] *= -1
        if ballY[i] < 0 or ballY[i] > 600:
            ballDy[i] *= -1

    display.fill((0, 0, 0))

    for i in range(len(ballX)):
        display.blit(ball, (ballX[i], ballY[i]))

    pygame.display.update()

pygame.quit()