import os

os.chdir(r'C:\Users\kalyan kumar\Videos\WEB SEIRIES\Chernobyl')

for f in os.listdir():
    fname, ext = os.path.splitext(f)
    folder, episode = fname.split('-')
    folder = folder.strip()
    episode = episode.strip()
    new_name = '{}-{}{}'.format(episode, folder, ext)
    print(new_name)
    os.rename(f, new_name)
